#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EFortTeam.h"
#include "FortExperienceDelta.h"
#include "ReplicatedStatValues.h"
#include "FortPlayerScoreReport.generated.h"

class AFortPlayerState;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortPlayerScoreReport {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlayerName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerState> PlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTeam::Type> PlayerTeam;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues ReplicatedStats_Campaign[35];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FReplicatedStatValues ReplicatedStats_Zone[35];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialExperienceAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortExperienceDelta ExperienceInfoDelta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastExperienceDeltaAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastScoreDeltaAmount;
    
    FFortPlayerScoreReport();
};

