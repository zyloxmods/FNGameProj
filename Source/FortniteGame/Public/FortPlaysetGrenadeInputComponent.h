#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnPlaysetGrenadeTargetDelegate.h"
#include "FortPlaysetGrenadeInputComponent.generated.h"

class APlayerController;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlaysetGrenadeInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlaysetGrenadeTarget OnPlaysetGrenadeTarget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PlaysetGrenadeInputComponent;
    
public:
    UFortPlaysetGrenadeInputComponent();
    UFUNCTION(BlueprintCallable)
    void PushPlaysetGrenadeInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopPlaysetGrenadeInputMode(APlayerController* PlayerController);
    
};

