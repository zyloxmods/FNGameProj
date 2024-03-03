#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortNavigationActor_EventGraphItem.h"
#include "FortNavigationActor_OpenablePresent.generated.h"

class UFortItemDefinition;

UCLASS(Abstract, Blueprintable)
class AFortNavigationActor_OpenablePresent : public AFortNavigationActor_EventGraphItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OpenDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bCanInspect;
    
public:
    AFortNavigationActor_OpenablePresent();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdatePackageRotation(float XRotationValue, float YRotationValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShakePresent(const UFortItemDefinition* ItemDef);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetPresent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOpenPresent(bool bActionCancelled);
    
};

