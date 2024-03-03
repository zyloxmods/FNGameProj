#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortCommunityVotingOptionPreview.generated.h"

class UCommonBorder;
class UCommonLoadGuard;
class UCommonTextBlock;
class UFortCommunityVotingManager;
class UImage;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingOptionPreview : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ShortDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* CommonBorder_Owned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_Owned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuard;
    
public:
    UFortCommunityVotingOptionPreview();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayVotingAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayUnhoveredAnimation();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayHoveredAnimation();
    
};

