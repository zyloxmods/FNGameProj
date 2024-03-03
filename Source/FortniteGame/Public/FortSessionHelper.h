#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "PartyBeaconState.h"
#include "EFortSessionHelperJoinResult.h"
#include "EFortSessionHelperJoinState.h"
#include "FortSessionHelper.generated.h"

class AFortPartyBeaconClient;

UCLASS(Blueprintable)
class UFortSessionHelper : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UClass* BeaconClientClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPartyBeaconClient* PartyBeaconClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentSessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EPartyReservationResult::Type> LastBeaconResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortSessionHelperJoinState::Type> CurrentJoinState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortSessionHelperJoinResult CurrentJoinResult;
    
public:
    UFortSessionHelper();
};

