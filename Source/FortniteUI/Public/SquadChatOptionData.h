#pragma once
#include "CoreMinimal.h"
#include "RadialOptionData.h"
#include "SquadChatOptionData.generated.h"

USTRUCT(BlueprintType)
struct FSquadChatOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ChatText;
    
    FORTNITEUI_API FSquadChatOptionData();
};

