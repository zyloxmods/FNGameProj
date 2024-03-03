#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "EHighlightReelIds.h"
#include "HighlightClipPayload.h"
#include "HighlightReelPlayerInfoPayload.h"
#include "HighlightReelPayload.generated.h"

USTRUCT(BlueprintType)
struct FHighlightReelPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UCRN_PlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UCRN_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UCRN_MMR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FHighlightReelPlayerInfoPayload UCRN_PlayerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHighlightReelIds UCRN_HighlightReelId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHighlightClipPayload> UCRN_Clips;
    
    FORTNITEGAME_API FHighlightReelPayload();
};

