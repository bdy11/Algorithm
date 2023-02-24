#include <iostream>
#include <string.h>

using namespace std;
#include "feature_point_array.h"

// tested
void feature_cache_init(FEATURE_CACHE *feature_cache)
{
    feature_cache->size = 0;
    cout << "feature number is " << feature_cache->size << endl;

    memset(feature_cache->feature, 0, sizeof(feature_cache->feature));

    for (int i = 0; i < UPS_PERCEPTION_FEATURE_MAX; i++)
    {
        cout << " feature " << i << " is " << feature_cache->feature[i] << endl;
    }
}

void push_back_feature_point(FEATURE_CACHE *feature_cache, UPS_PERCEPTION_POINT *feature_point)
{
    // check cache size
    if (!is_cache_full(feature_cache))
    {
        // add feature to feature cache
        feature_cache->feature[feature_cache->size] = *feature_point;
        feature_cache->size++;
        cout << "current feature number is " << feature_cache->size << endl;
    }
    // todo : error handling if cache is full
}

void del_feature_point(FEATURE_CACHE feature_cache, UPS_PERCEPTION_POINT *feature_point)
{

}

UPS_PERCEPTION_POINT *get_feature_point(FEATURE_CACHE *feature_cache, int idx)
{
    // check index range
    if(idx < feature_cache->size)
    {
        return &(feature_cache->feature[idx]);
    }
    else
    {
        // to do error handling
        return NULL;
    }
}

bool is_cache_empty(FEATURE_CACHE *feature_cache)
{
    return (feature_cache->size > 0 ? false : true);
}

bool is_cache_full(FEATURE_CACHE *feature_cache)
{
    return (feature_cache->size < UPS_PERCEPTION_FEATURE_MAX ? false : true);
}

int main(int, char **)
{

    FEATURE_CACHE cache;
    feature_cache_init(&cache);
    for (int i = 0; i < 200; i++)
    {
        UPS_PERCEPTION_POINT fea = i;
        UPS_PERCEPTION_POINT *feature_point = &fea;
        push_back_feature_point(&cache, feature_point);
    }

    cout<< "feature at "<< 5 <<" is "<<*get_feature_point(&cache, 5)<<endl;
    cout << is_cache_full(&cache) << endl;
    return 0;
}
