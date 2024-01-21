#pragma once
#include "CoreMinimal.h"
#include "Engine/LocalPlayer.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortPlayerScoreReport.h"
#include "FortRewardReport.h"
#include "PlayerReportingInfoContainer.h"
#include "FortLocalPlayer.generated.h"

class UFortClientSettingsRecord;
class UFortOnlineAccount;

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UFortLocalPlayer : public ULocalPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortOnlineAccount* FortOnlineAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRewardReport CachedRewardReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortPlayerScoreReport> CachedScoreReports;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortClientSettingsRecord* ClientSettingsRecord;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bControllerAttached;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlatformUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPlayerReportingInfoContainer PlayerReportingInfoContainer;
    
public:
    UFortLocalPlayer();
};

