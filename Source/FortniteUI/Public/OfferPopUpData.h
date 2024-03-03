#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OfferPopUpData.generated.h"

USTRUCT(BlueprintType)
struct FOfferPopUpData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText FormatedText;
    
    FORTNITEUI_API FOfferPopUpData();
};

