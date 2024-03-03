#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "AnimTagProperty.h"
#include "GameplayTagNotifyDelegateDelegate.h"
#include "FortBaseAnimInstance.generated.h"

class AFortPawn;

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Game)
class UFortBaseAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAnimTagProperty> AnimPropertyGameplayTagBindings;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagNotifyDelegate OnGameplayTagNotifyBegin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagNotifyDelegate OnGameplayTagNotifyEnd;
    
    UFortBaseAnimInstance();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPawn* TryGetFortPawn();
    
};

