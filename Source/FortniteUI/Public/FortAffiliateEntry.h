#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortAffiliateEntry.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAffiliateEntry : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* OptionDisplayName;
    
    UFortAffiliateEntry();
    
    // Fix for true pure virtual functions not being implemented
};

