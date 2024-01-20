#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "UFortMatchmakingKnobsDataSource.h"
#include "PlaylistUserOptionBase.generated.h"

class UMaterial;

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API UPlaylistUserOptionBase : public UDataAsset {
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
    UMaterial* OptionMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanHaveNoOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> MenuListType;
    
    UPlaylistUserOptionBase();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOptionValueNameFromValue(const FString& OptionValue) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOptionKey(bool bWithScoping) const;
    
};

