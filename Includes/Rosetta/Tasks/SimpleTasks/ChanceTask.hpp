// This code is based on Sabberstone project.
// Copyright (c) 2017-2019 SabberStone Team, darkfriend77 & rnilva
// RosettaStone is hearthstone simulator using C++ with reinforcement learning.
// Copyright (c) 2019 Chris Ohk, Youngjoong Kim, SeungHyun Jeon

#ifndef ROSETTASTONE_CHANCE_TASK_HPP
#define ROSETTASTONE_CHANCE_TASK_HPP

#include <Rosetta/Tasks/ITask.hpp>

namespace RosettaStone::SimpleTasks
{
//!
//! \brief ChanceTask class.
//!
//! This class represents the task for selecting something at random.
//!
class ChanceTask : public ITask
{
 public:
    //! Constructs task with given \p useFlag.
    //! \param useFlag The flag to use.
    explicit ChanceTask(bool useFlag = false);

    //! Returns task ID.
    //! \return Task ID.
    TaskID GetTaskID() const override;

 private:
    //! Processes task logic internally and returns meta data.
    //! \param player The player to run task.
    //! \return The result of task processing.
    TaskStatus Impl(Player& player) override;

    //! Internal method of Clone().
    //! \return The cloned task.
    ITask* CloneImpl() override;

    bool m_useFlag = false;
};
}  // namespace RosettaStone::SimpleTasks

#endif  // ROSETTASTONE_CHANCE_TASK_HPP