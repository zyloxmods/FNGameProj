#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandDescriptionTag.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortCreativeSettingsFlow.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeSettingsFlow : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Solaris;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatablePanel> SolarisWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* IslandName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PublishedIslandCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* IslandBulletOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BulletPointImageOne;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* IslandBulletTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BulletPointImageTwo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* IslandBulletThree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* BulletPointImageThree;
    
public:
    UFortCreativeSettingsFlow();
    UFUNCTION(BlueprintCallable)
    void SetupIslandDisplayInformation();
    
    UFUNCTION(BlueprintCallable)
    void SetIslandDescriptionTags(const TArray<FCreativeIslandDescriptionTag>& CreativeIslandDescriptionTags);
    
    UFUNCTION(BlueprintCallable)
    void OnClose();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnerOfCurrentVolume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HasActiveModalWidget(bool& OutWidgetActive);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetLinkedIslandTagline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetLinkedIslandMnemonic();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetIslandDescriptionTags();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetIslandCreatorName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetAvailableDescriptionTags();
    
};

