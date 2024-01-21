#pragma once
#include "CoreMinimal.h"
#include "AthenaQuickChatActiveEntry.h"
#include "RadialOptionData.h"
#include "SquadQuickChatOptionData.generated.h"

USTRUCT(BlueprintType)
struct FSquadQuickChatOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaQuickChatActiveEntry ChatEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    FORTNITEUI_API FSquadQuickChatOptionData();
};

