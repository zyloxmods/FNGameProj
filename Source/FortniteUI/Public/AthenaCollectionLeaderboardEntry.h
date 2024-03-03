#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaCollectionLeaderboardEntry.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UFortSocialAvatarIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionLeaderboardEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText ValueTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText EmptyDisplayNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueMinimumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ValueMaximumFractionalDigits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bValueIsFloat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Placement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIcon;
    
public:
    UAthenaCollectionLeaderboardEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnValueSet(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlacementSet(int32 Placement);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeaderboardEntryReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnLeaderboardEntryInitialized(bool bIsLocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnDisplayNameSet(const FString& DisplayName);
    
};

