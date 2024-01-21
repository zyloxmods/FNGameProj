#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Styling/SlateTypes.h"
#include "FortRichTextStyleData.generated.h"

USTRUCT(BlueprintType)
struct FFortRichTextStyleData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHyperlinkStyle;
    
    FORTNITEUI_API FFortRichTextStyleData();
};

