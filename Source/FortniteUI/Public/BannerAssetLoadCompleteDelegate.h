#pragma once
#include "CoreMinimal.h"
#include "BannerAssetLoadCompleteDelegate.generated.h"

class UMaterialInstanceDynamic;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBannerAssetLoadComplete, UObject*, LoadedAsset, UMaterialInstanceDynamic*, MIDRef, FName, BannerColorName);

