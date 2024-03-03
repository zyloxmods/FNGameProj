#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_Aircraft.generated.h"

class AFortAircraft;

UCLASS(Blueprintable, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UFortControllerComponent_Aircraft : public UFortControllerComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAircraftStateChange);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAircraftStateChange OnAircraftStateChange;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAircraft* CurrentAircraft;
    
public:
    UFortControllerComponent_Aircraft();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAttemptAircraftJump(FRotator ClientRotation);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInAircraft() const;
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExitAircraft();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientEnterAircraft(AFortAircraft* InAircraft);
    
};

