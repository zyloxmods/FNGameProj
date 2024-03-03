#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EGameReadiness.h"
#include "InputCoreTypes.h"
#include "InputCoreTypes.h"
#include "AthenaTeamDisplayInfo.h"
#include "CachedComponentMaterials.h"
#include "FortItemPlacementActor.h"
#include "FortTeamMemberPedestal.generated.h"

class AAthenaSquadPedestalGroup;
class UFortHero;
class UFortTeamMemberEntryBase;
class UMaterialInterface;
class UPrimitiveComponent;
class UStaticMeshComponent;
class UTexture2D;
class UWidgetComponent;

UCLASS(Abstract, Blueprintable)
class AFortTeamMemberPedestal : public AFortItemPlacementActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedComponentMaterials> CachedComponentMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAthenaSquadPedestalGroup* OwningPedestalGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AssignedMemberIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisualOrderIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_MemberInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_FillOpenSlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_BattlePassInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetComponent* WidgetComponent_CompletedFeatInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PlaceholderMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortTeamMemberEntryBase*> MemberWidgetEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortHero* MemberHeroItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LocalLoadoutFailureTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTimeToPawnLoadedEnabled;
    
public:
    AFortTeamMemberPedestal();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTeamMemberSet(bool bHasValidTeamMember);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPedestalIsPopulatedChanged(bool bIsPopulated, bool bOwningSquadContainsLocalPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwningPedestalGroupEstablished(int32 SquadIdx, bool bSquadHasLocalPlayer, bool bIsPopulated);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewSquadEstablished(bool bMultipleSquadsPopulated, bool bOwningSquadContainsLocalPlayer, const FAthenaTeamDisplayInfo& OwningSquadStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnIsCurrentlyInMatchChanged(bool bIsInMatch);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnGameReadinessChanged(EGameReadiness GameReadiness);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDisconnectedToCampaignLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnConnectedToCampaignLobby();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAvatarChanged(UTexture2D* AvatarImage, FColor AvatarBackground, FColor HighlightColor);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidTeamMember() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingFortnite() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInLocalSquadGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInFrontEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCurrentMemberLocal() const;
    
    UFUNCTION(BlueprintCallable)
    void InitializePlaceholderMesh(UStaticMeshComponent* NewPlaceholderMesh);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlaceholderMeshInputTouchEnd(TEnumAsByte<ETouchIndex::Type> FingerIndex, UPrimitiveComponent* TouchedComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaceholderMeshEndCursorOver(UPrimitiveComponent* TouchedComponent);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaceholderMeshClicked(UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlaceholderMeshBeginCursorOver(UPrimitiveComponent* TouchedComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetTeamMemberDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrentTeamSize() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearOverrideMaterial();
    
    UFUNCTION(BlueprintCallable)
    void ApplyUniformOverrideMaterial(UMaterialInterface* OverrideMaterial);
    
};

