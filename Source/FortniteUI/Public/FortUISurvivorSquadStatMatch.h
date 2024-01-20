#pragma once
#include "CoreMinimal.h"
#include "FortMultiSizeBrush.h"
#include "EFortBuffState.h"
#include "EFortUISurvivorSquadMatchType.h"
#include "FortUISurvivorSquadStatMatch.generated.h"

USTRUCT(BlueprintType)
struct FFortUISurvivorSquadStatMatch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMultiSizeBrush Icons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MagnitudeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AttributeDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMembersMeetingCriteria;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMembersRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUISurvivorSquadMatchType MatchType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortBuffState PreviewEffect;
    
    FORTNITEUI_API FFortUISurvivorSquadStatMatch();
};

