#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "FortLeaderboardEntryWidget.generated.h"

class UCommonBorder;
class UCommonTextBlock;
class UImage;
class UObject;
class USocialUser;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLeaderboardEntryWidget : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* LeaderboardEntryObject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Container_PlatformSocialCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlatformSocialCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformSocialCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USocialUser* QueriedSocialUser;
    
public:
    UFortLeaderboardEntryWidget();
    UFUNCTION(BlueprintCallable)
    void DisplayPlatformProfile();
    
    
    // Fix for true pure virtual functions not being implemented
};

