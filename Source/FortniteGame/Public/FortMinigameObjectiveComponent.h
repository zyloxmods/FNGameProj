#pragma once
#include "CoreMinimal.h"
#include "FortMinigameLogicComponent.h"
#include "MinigameObjectiveUpdatedDelegate.h"
#include "FortMinigameObjectiveComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortMinigameObjectiveComponent : public UFortMinigameLogicComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMinigameObjectiveUpdated OnObjectiveUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TrackedIndex;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ProgressPercentage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPurgeTrackingHistoryOnRemoval;
    
public:
    UFortMinigameObjectiveComponent();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopTracking(bool bPurgeHistory, float Percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartTracking(int32 IndicatorPresetIndex, float Percentage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetTrackedProgress(float Percentage);
    
};

