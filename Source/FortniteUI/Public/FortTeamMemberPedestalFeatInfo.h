#pragma once
#include "CoreMinimal.h"
#include "FortTeamMemberEntryBase.h"
#include "FortTeamMemberPedestalFeatInfo.generated.h"

class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTeamMemberPedestalFeatInfo : public UFortTeamMemberEntryBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FeatName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FeatDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* LazyImage_FeatIcon;
    
public:
    UFortTeamMemberPedestalFeatInfo();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFeatDefinitionSet();
    
};

