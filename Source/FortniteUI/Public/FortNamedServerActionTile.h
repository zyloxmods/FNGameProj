#pragma once
#include "CoreMinimal.h"
#include "FortServerActionTile.h"
#include "FortNamedServerActionTile.generated.h"

class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNamedServerActionTile : public UFortServerActionTile {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Background;
    
public:
    UFortNamedServerActionTile();
};

