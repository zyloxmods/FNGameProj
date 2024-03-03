#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserListEntry.h"
#include "FortActivityBrowserTile.generated.h"

class UCommonTextBlock;
class UFortLazyImage;
class UMaterialInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityBrowserTile : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> LazyGamemodeKeyart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActivityName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_ActivityArt;
    
public:
    UFortActivityBrowserTile();
    
    // Fix for true pure virtual functions not being implemented
};

