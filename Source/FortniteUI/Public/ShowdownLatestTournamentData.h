#pragma once
#include "CoreMinimal.h"
#include "ShowdownTournamentEntry.h"
#include "ShowdownLatestTournamentData.generated.h"

USTRUCT(BlueprintType)
struct FShowdownLatestTournamentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastModified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FShowdownTournamentEntry> Entries;
    
    FORTNITEUI_API FShowdownLatestTournamentData();
};

