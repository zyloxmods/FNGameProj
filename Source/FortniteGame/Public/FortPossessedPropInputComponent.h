#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "OnCreativeInputDelegate.h"
#include "FortPossessedPropInputComponent.generated.h"

class APlayerController;
class UInputComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPossessedPropInputComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPossessedPropCancel;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPossessedPropPlace;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCreativeInput OnPossessedPropMakeNoise;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* FortPossessedPropInputComponent;
    
public:
    UFortPossessedPropInputComponent();
    UFUNCTION(BlueprintCallable)
    void PushPossessedPropInputMode(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    void PopPossessedPropInputMode(APlayerController* PlayerController);
    
};

