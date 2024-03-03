#pragma once
#include "CoreMinimal.h"
#include "FortPetAnimInstanceShared.h"
#include "FortPetAnimInstance_AnimDynamics.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class UFortPetAnimInstance_AnimDynamics : public UFortPetAnimInstanceShared {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PawnSpeedForAnimDynamics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PawnSpeedForPlayingEmote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PawnSpeedForDBNO;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsJoggingOrSprinting: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bPetWantsAnimDynamics: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingEmote: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsPlayingEmoteOrDBNO: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydiving: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsParachuteOpened: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydiveDiveMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsSkydiveFloating: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsCrouching: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsTargeting: 1;
    
public:
    UFortPetAnimInstance_AnimDynamics();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParachuteOpened();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnParachuteClosed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndFloating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndDiveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndCrouching();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginTargeting();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginSkydiving();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginFloating();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginDiveMode();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnBeginCrouching();
    
};

