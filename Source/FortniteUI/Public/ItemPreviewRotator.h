#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortItemPreviewSceneChanger.h"
#include "InterpolatedTransitionCamera.h"
#include "SceneTransitionOptions.h"
#include "ItemPreviewRotator.generated.h"

class UFortAccountItemDefinition;

UCLASS(Blueprintable)
class AItemPreviewRotator : public AFortItemPreviewSceneChanger {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CameraTransitionLerpDuration;
    
public:
    AItemPreviewRotator();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCameraTransitionReady(bool bPrimaryToSecondary, const UFortAccountItemDefinition* PrimaryRequestedItem, const FSceneTransitionOptions& Options);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FInterpolatedTransitionCamera GetInterpolatedTransitionCameraPosition(const FTransform& TransitionCameraTransform, float TransitionCameraFieldOfView, float ProgressThroughTransitionSecs, float TransitionDurationSecs) const;
    
    UFUNCTION(BlueprintCallable)
    void CameraTransitionComplete();
    
};

