#pragma once
#include "CoreMinimal.h"
#include "FortAthenaTutorialBase.h"
#include "FortAthenaTutorial_TargetInfo.h"
#include "FortAthenaTutorial_Scoping.generated.h"

class AActor;
class UFortItemDefinition;

UCLASS(Blueprintable)
class AFortAthenaTutorial_Scoping : public AFortAthenaTutorialBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaTutorial_TargetInfo> ShootTargets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* GunToEquipItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* ScopingCameraPoint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopingCameraInSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopingCameraOutSpeed;
    
public:
    AFortAthenaTutorial_Scoping();
private:
    UFUNCTION(BlueprintCallable)
    void OnTargetDestroyed(int32 TargetIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnScopingTargetsActivated();
    
};

