#pragma once
#include "CoreMinimal.h"
#include "CreativeIslandDescriptionTag.h"
#include "Blueprint/UserWidget.h"
#include "OnSupportCreatorDelegate.h"
#include "OnToggleDetailsDelegate.h"
#include "FortCreativeMiniGameInfo.generated.h"

class UCommonTextBlock;
class UInputComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativeMiniGameInfo : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSupportCreator OnSupportCreator;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnToggleDetails OnToggleDetails;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CreatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_SupportCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Bullet1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Bullet2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Bullet3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SizeFont_Bullet_Mobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UInputComponent* PanelInputComponent;
    
public:
    UFortCreativeMiniGameInfo();
protected:
    UFUNCTION(BlueprintCallable)
    void PushPanelInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void PopPanelInputComponent();
    
    UFUNCTION(BlueprintCallable)
    void OnVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTextSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMiniGameStartedFromInputComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartGameEnabled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCreativeIslandDescriptionTag> GetIslandDescriptionTags() const;
    
public:
    UFUNCTION(BlueprintCallable)
    bool ForceRefresh();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool AreDetailsToggleable() const;
    
};

