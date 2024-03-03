#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EIndexNavigationResult.h"
#include "FortPlayerSurveyAnswerContainerChangeEventInfo.h"
#include "IndexSelectionModelChangedDelegateDelegate.h"
#include "SingleIndexSelectionModel.h"
#include "FortPlayerSurveyQuestionSelector.generated.h"

class UFortPlayerSurveyBase;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortPlayerSurveyQuestionSelector : public UObject, public ISingleIndexSelectionModel {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFortPlayerSurveyAnswerContainerChangeInternalDelegate, UObject*, Source, const FFortPlayerSurveyAnswerContainerChangeEventInfo&, EventInfo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFortPlayerSurveyAnswerableQuestionChangeInternalDelegate, UObject*, Source);
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyBase* Survey;
    
public:
    UFortPlayerSurveyQuestionSelector();
    UFUNCTION(BlueprintCallable)
    void SetSurvey(UFortPlayerSurveyBase* Value);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleQuestionChanged(UObject* Source, int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void HandleAnswerChanged(UObject* Source, int32 Index);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyBase* GetSurvey() const;
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    EIndexNavigationResult TryMoveDelta(int32 InDelta) override PURE_VIRTUAL(TryMoveDelta, return EIndexNavigationResult::Succeeded;);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectedIndex(int32 Value) override PURE_VIRTUAL(SetSelectedIndex,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnSelectedIndexChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const override PURE_VIRTUAL(RemoveOnSelectedIndexChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnNumItemsChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const override PURE_VIRTUAL(RemoveOnNumItemsChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveOnNavigationChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const override PURE_VIRTUAL(RemoveOnNavigationChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedIndex() const override PURE_VIRTUAL(GetSelectedIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumItems() const override PURE_VIRTUAL(GetNumItems, return 0;);
    
    UFUNCTION(BlueprintCallable)
    EIndexNavigationResult CanMoveDelta(int32 InDelta) const override PURE_VIRTUAL(CanMoveDelta, return EIndexNavigationResult::Succeeded;);
    
    UFUNCTION(BlueprintCallable)
    void AddOnSelectedIndexChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const override PURE_VIRTUAL(AddOnSelectedIndexChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void AddOnNumItemsChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const override PURE_VIRTUAL(AddOnNumItemsChangedDelegate,);
    
    UFUNCTION(BlueprintCallable)
    void AddOnNavigationChangedDelegate(const FIndexSelectionModelChangedDelegate& InDelegate) const override PURE_VIRTUAL(AddOnNavigationChangedDelegate,);
    
};

