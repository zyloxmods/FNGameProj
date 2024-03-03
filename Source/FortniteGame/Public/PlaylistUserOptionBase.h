#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "CreativeEditablePropertyInterface.h"
#include "FortCreativeToyOptionInterface.h"
#include "FortUserOptionProvider.h"
#include "Templates/SubclassOf.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "PlaylistUserOptionBase.generated.h"

class UMaterial;
class UUserWidget;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionBase : public UDataAsset, public IFortUserOptionProvider, public IFortCreativeToyOptionInterface, public ICreativeEditablePropertyInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UObject> OptionScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OptionKey;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionDisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterial* OptionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHaveNoOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> MenuListType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUserWidget> EditWidget;
    
public:
    UPlaylistUserOptionBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOptionValueNameFromValue(const FString& OptionValue, bool bAllowNoOverride) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOptionKey(bool bWithScoping) const;
    
    
    // Fix for true pure virtual functions not being implemented
};

