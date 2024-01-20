#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CommonUIRichTextData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class COMMONUI_API UCommonUIRichTextData : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* InlineIconSet;
    
public:
    UCommonUIRichTextData();
};

