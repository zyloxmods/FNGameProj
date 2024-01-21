#pragma once
#include "CoreMinimal.h"
#include "FortGameModeZone.h"
#include "FortGameModePvE.generated.h"

class AActor;
class AFortAircraft;

UCLASS(Blueprintable, MinimalAPI, NonTransient, Config=Game)
class AFortGameModePvE : public AFortGameModeZone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxIdleTimeWhileSuspicious;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleNotificationInterval;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOnlyIdleKickPublicMatches;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdleFlag;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdleCheck;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IdleCheck2;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IdleConditionVar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIdleKickEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForAircraft;
    
    AFortGameModePvE();
    UFUNCTION(BlueprintCallable)
    void SetIdleKickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void RemoveAllowIdlePlayerLocation(AActor* LocationActor);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnAircraftRegistered(const AFortAircraft* InAircraft);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddAllowIdlePlayerLocation(AActor* LocationActor, float Radius);
    
};

