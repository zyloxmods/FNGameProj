#pragma once
#include "CoreMinimal.h"
#include "RadialOptionData.h"
#include "MapNoteOptionData.generated.h"

USTRUCT(BlueprintType)
struct FMapNoteOptionData : public FRadialOptionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText MapNoteText;
    
    FORTNITEUI_API FMapNoteOptionData();
};

