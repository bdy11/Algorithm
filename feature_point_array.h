#ifndef FEATURE_POINT_ARRAY_H
#define FEATURE_POINT_ARRAY_H

#define UPS_PERCEPTION_FEATURE_MAX 200
typedef  int UPS_PERCEPTION_POINT;

typedef struct feature_cache{
    int size;
    UPS_PERCEPTION_POINT* p_feature[UPS_PERCEPTION_FEATURE_MAX];
    UPS_PERCEPTION_POINT feature[UPS_PERCEPTION_FEATURE_MAX];
}FEATURE_CACHE;

void feature_cache_init(FEATURE_CACHE * feature_cache);
void push_back_feature_point(FEATURE_CACHE feature_cache, UPS_PERCEPTION_POINT *feature_point);

void del_feature_point(FEATURE_CACHE feature_cache, UPS_PERCEPTION_POINT *feature_point);

UPS_PERCEPTION_POINT * get_feature_point(FEATURE_CACHE feature_cache, int idx);

bool is_cache_empty(FEATURE_CACHE feature_cache);


#endif // FEATURE_POINT_ARRAY_H