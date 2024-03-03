#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CatalogOffer.h"
#include "FortCommunityVotesState.generated.h"

USTRUCT(BlueprintType)
struct FFortCommunityVotesState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ElectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCatalogOffer> Candidates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime ElectionEnds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumWinners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WinnerStateHours;
    
    FORTNITEGAME_API FFortCommunityVotesState();
};

