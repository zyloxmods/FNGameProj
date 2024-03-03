#pragma once
#include "CoreMinimal.h"
#include "FortHelpItem.h"
#include "FortHelpItemCategory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortHelpItemCategory : public UFortHelpItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortHelpItem*> AssetSubItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UFortHelpItem*> InlineSubItems;
    
public:
    UFortHelpItemCategory();
};

