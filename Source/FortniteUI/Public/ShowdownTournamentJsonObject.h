#pragma once
#include "CoreMinimal.h"
#include "ShowdownTournamentData.h"
#include "ShowdownTournamentJsonObject.generated.h"

USTRUCT(BlueprintType)
struct FShowdownTournamentJsonObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShowdownTournamentData> Tournaments;
    
    FORTNITEUI_API FShowdownTournamentJsonObject();
};

