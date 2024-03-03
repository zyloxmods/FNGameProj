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
    UCommonTextBlock* Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText StatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BaseGameplayTag;
    
public:
    UFortProfileStatsRow();
};

