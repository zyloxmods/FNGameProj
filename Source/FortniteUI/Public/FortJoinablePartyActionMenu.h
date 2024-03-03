#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SocialInteractionMenu.h"
#include "FortJoinablePartyActionMenu.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortJoinablePartyActionMenu : public USocialInteractionMenu {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColor SecondNameColor;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SecondNameFontSize;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_DisplayNames;
    
public:
    UFortJoinablePartyActionMenu();
};

