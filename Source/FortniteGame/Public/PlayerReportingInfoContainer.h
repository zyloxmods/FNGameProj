#pragma once
#include "CoreMinimal.h"
#include "PlayerReportingInfoContainer.generated.h"

class UFortLocalPlayer;
class UReportablePlayerInfo;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPlayerReportingInfoContainer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortLocalPlayer* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReportablePlayerInfo*> AllPlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UReportablePlayerInfo*> AllIslandInfo;
    
public:
    FPlayerReportingInfoContainer();
};

