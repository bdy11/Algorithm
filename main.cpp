#include <iostream>
#include <string.h>

using namespace std;
#include "feature_point_array.h"

void feature_cache_init(FEATURE_CACHE * feature_cache)
{
    (*feature_cache).size = 0;
    cout<<"feature_size is " << (*feature_cache).size <<endl;
    memset((*feature_cache).feature, 0, sizeof((*feature_cache).feature));

    for(int i = 0; i < UPS_PERCEPTION_FEATURE_MAX; i++ )
    {
        (*feature_cache).p_feature[i] = &(*feature_cache).feature[i];
        cout<<"feature_cache address is " << (*feature_cache).p_feature[i] <<endl;
        cout<<"feature_cache feature is " << (*feature_cache).feature[i] <<endl;
    }
}

void push_back_feature_point(FEATURE_CACHE *feature_cache, UPS_PERCEPTION_POINT *feature_point)
{

    *((*feature_cache).p_feature[(*feature_cache).size]) = *feature_point;
    (*feature_cache).size++;
}

void del_feature_point(FEATURE_CACHE feature_cache, UPS_PERCEPTION_POINT *feature_point)
{

}

UPS_PERCEPTION_POINT * get_feature_point(FEATURE_CACHE feature_cache, int idx)
{
   return NULL;
}

bool is_cache_empty(FEATURE_CACHE feature_cache)
{
    return (feature_cache.size > 0 ? false : true); 
}


int main(int, char**) {

    FEATURE_CACHE cache;
    feature_cache_init(&cache);
    cout<< cache.feature[0]<<endl;
    UPS_PERCEPTION_POINT fea = 5; 
    UPS_PERCEPTION_POINT *feature_point = &fea;
    push_back_feature_point(&cache, feature_point);
    cout<<cache.feature[0]<<endl;
        cout<<cache.size<<endl;
    cout<<*cache.p_feature[0]<<endl;
    cout<<"pause"<<endl;
    return 0;
}
