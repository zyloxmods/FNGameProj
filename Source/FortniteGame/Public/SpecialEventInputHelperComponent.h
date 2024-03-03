#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SpecialEventInputPressDelegate.h"
#include "SpecialEventInputUpdateDelegate.h"
#include "SpecialEventInputHelperComponent.generated.h"

class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USpecialEventInputHelperComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialEventInputUpdate SpecialEventInputUpdateDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSpecialEventInputPress SpecialEventInputPressDelegate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBlockInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UInputComponent* InputComp;
    
public:
    USpecialEventInputHelperComponent();
    UFUNCTION(BlueprintCallable)
    void PushInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void PopInputComponent();
    
};

