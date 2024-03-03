#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "FortAthenaMOTDNewsChildren.h"
#include "FortAthenaMOTDTile.generated.h"

class UCommonBorder;
class UEpicCMSImage;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAthenaMOTDTile : public UCommonButton, public IUserListEntry, public IFortAthenaMOTDNewsChildren {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_NewsImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_NewsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_AdSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock_AdSpace;
    
public:
    UFortAthenaMOTDTile();
    
    // Fix for true pure virtual functions not being implemented
};

