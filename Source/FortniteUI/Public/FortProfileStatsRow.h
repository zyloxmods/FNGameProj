#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortProfileStatsRow.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortProfileStatsRow : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Value;
    
public:
    UFortProfileStatsRow();
};

