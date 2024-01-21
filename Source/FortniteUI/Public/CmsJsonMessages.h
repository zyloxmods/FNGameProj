#pragma once
#include "CoreMinimal.h"
#include "AthenaNewsSource.h"
#include "CreativeAdSource.h"
#include "KoreanCafeSource.h"
#include "ShowdownTournamentSource.h"
#include "SubgameScreenSource.h"
#include "CmsJsonMessages.generated.h"

USTRUCT(BlueprintType)
struct FCmsJsonMessages {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _locale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaNewsSource BattleRoyaleNews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowdownTournamentSource TournamentInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKoreanCafeSource KoreanCafe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSubgameScreenSource SubGameInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCreativeAdSource CreativeAds;
    
    FORTNITEUI_API FCmsJsonMessages();
};

