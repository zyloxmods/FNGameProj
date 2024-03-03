#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/StaticMeshComponent.h"
#include "EMobileInteractionIconTypes.h"
#include "FortMobileInteractionComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMobileInteractionComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* IconMID;
    
public:
    UFortMobileInteractionComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void TickLocation(float DeltaTime);
    
public:
    UFUNCTION(BlueprintCallable)
    void StopRadialTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartRadialTimer(float Duration);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibleStartTime();
    
    UFUNCTION(BlueprintCallable)
    void SetUpdateLocationOnTick(bool bShouldUpdate);
    
    UFUNCTION(BlueprintCallable)
    void SetRarityColor(FLinearColor InColor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetRadialStartTime(float StartTime);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialOpacity(float Opacity);
    
    UFUNCTION(BlueprintCallable)
    void SetRadialDuration(float Duration);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetIcon(EMobileInteractionIconTypes IconType);
    
    UFUNCTION(BlueprintCallable)
    void SetExtents(FVector Extents);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPush(float Offset);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAvailable() const;
    
};

