#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "BannerAssetLoadCompleteDelegate.h"
#include "FortAsyncAction_LoadBannerAsset.generated.h"

class UFortAsyncAction_LoadBannerAsset;
class UMaterialInstanceDynamic;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_LoadBannerAsset : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBannerAssetLoadComplete BannerAssetLoadComplete;
    
    UFortAsyncAction_LoadBannerAsset();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_LoadBannerAsset* AsyncLoadBannerAsset(UObject* WorldContextObject, TSoftObjectPtr<UObject> AssetToLoad, UMaterialInstanceDynamic* MIDRef, FName BannerColorName);
    
};

