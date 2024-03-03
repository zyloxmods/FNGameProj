#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortItemPreviewSceneChanger.h"
#include "SceneTransitionOptions.h"
#include "ItemPreviewSwapper.generated.h"

class UCurveFloat;
class UFortAccountItemDefinition;

UCLASS(Blueprintable)
class AItemPreviewSwapper : public AFortItemPreviewSceneChanger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* CameraTransitionCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTransitionLerpDuration;
    
public:
    AItemPreviewSwapper();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatePreviousSceneTransform(const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNewSceneTransform(const FTransform& RelativeTransform);
    
    UFUNCTION(BlueprintCallable)
    void SwapComplete();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnReadyToSwap(const UFortAccountItemDefinition* PrimaryRequestedItem, const FSceneTransitionOptions& Options);
    
};

