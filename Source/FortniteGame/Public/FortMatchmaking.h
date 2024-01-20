#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EFortMatchmakingPrivacyConfiguration.h"
#include "FortCachedMatchmakingSearchParams.h"
#include "Templates/SubclassOf.h"
#include "FortMatchmaking.generated.h"

class AFortLobbyBeaconClient;
class AFortPartyBeaconClient;
class APartyBeaconClient;
class UFortMatchmakingPolicy;

UCLASS(Blueprintable, NotPlaceable, Config=Game, Within=FortGameInstance)
class FORTNITEGAME_API UFortMatchmaking : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<APartyBeaconClient> ReservationBeaconClientClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPartyBeaconClient* ReservationBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortLobbyBeaconClient* LobbyBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ControllerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TempZoneInstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCachedMatchmakingSearchParams CachedMatchmakingSearchParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMatchmakingPolicy* Matchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastCriticalMissionSessionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMatchmakingPrivacyConfiguration LastMatchmakingPrivacyConfiguration;
    
public:
    UFortMatchmaking();
};

