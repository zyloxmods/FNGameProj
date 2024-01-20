#pragma once
#include "CoreMinimal.h"
#include "LobbyBeaconHost.h"
#include "FortLobbyBeaconHost.generated.h"

UCLASS(Abstract, Blueprintable, NonTransient)
class AFortLobbyBeaconHost : public ALobbyBeaconHost {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bAllowReservationsToProceedToLobby: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWorldRecordLoaded: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastReservationCountForPermissionTimeoutChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LobbyPermissionTimeout;
    
public:
    AFortLobbyBeaconHost();
};

