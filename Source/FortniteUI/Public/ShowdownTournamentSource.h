#pragma once
#include "CoreMinimal.h"
#include "ShowdownTournamentJsonObject.h"
#include "ShowdownTournamentSource.generated.h"

USTRUCT(BlueprintType)
struct FShowdownTournamentSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShowdownTournamentJsonObject Tournament_Info;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString _locale;
    
    FORTNITEUI_API FShowdownTournamentSource();
};

